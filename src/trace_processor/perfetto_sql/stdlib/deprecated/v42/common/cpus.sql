--
-- Copyright 2024 The Android Open Source Project
--
-- Licensed under the Apache License, Version 2.0 (the "License");
-- you may not use this file except in compliance with the License.
-- You may obtain a copy of the License at
--
--     https://www.apache.org/licenses/LICENSE-2.0
--
-- Unless required by applicable law or agreed to in writing, software
-- distributed under the License is distributed on an "AS IS" BASIS,
-- WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
-- See the License for the specific language governing permissions and
-- limitations under the License.

INCLUDE PERFETTO MODULE cpu.size;
INCLUDE PERFETTO MODULE cpu.cpus;

CREATE PERFETTO TABLE cpus(cpu_index INT, size STRING)
AS
SELECT * FROM cpu_core_types;


CREATE PERFETTO FUNCTION guess_cpu_size(cpu_index INT)
RETURNS STRING AS
SELECT cpu_guess_core_type($cpu_index);