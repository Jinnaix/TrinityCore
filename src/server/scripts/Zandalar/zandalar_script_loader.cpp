/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:

// Atal'Dazar
void AddSC_instance_atal_dazar();
void AddSC_boss_rezan();
void AddSC_boss_volkaal();
void AddSC_boss_priestess_alun_za();

// Underrot
void AddSC_instance_underrot();
void AddSC_boss_elder_leaxa();
void AddSC_boss_cragmaw_the_infested();
void AddSC_boss_sporecaller_zancha();

// KingsRest
void AddSC_instance_kings_rest();
void AddSC_kings_rest();
void AddSC_boss_golden_serpent();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddZandalarScripts()
{
    // Atal'Dazar
    AddSC_instance_atal_dazar();
    AddSC_boss_rezan();
    AddSC_boss_volkaal();
    AddSC_boss_priestess_alun_za();

    // Underrot
    AddSC_instance_underrot();
    AddSC_boss_elder_leaxa();
    AddSC_boss_cragmaw_the_infested();
    AddSC_boss_sporecaller_zancha();

    //KingsRest
    AddSC_instance_kings_rest();
    AddSC_kings_rest();
    AddSC_boss_golden_serpent();
}
