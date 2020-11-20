/* ===============================================
    GENERAL BRIEFING NOTES
     - Uses HTML style syntax. All supported tags can be found here - https://community.bistudio.com/wiki/createDiaryRecord
     - For images use <img image='FILE'></img> (for those familiar with HTML note it is image rather than src).
     - Note that using the " character inside the briefing block is forbidden use ' instead of ".
*/

/* ===============================================
    SITUATION
     - Outline of what is going on, where we are we and what has happened before the mission has started? This needs to contain any relevant background information.
     - Draw attention to friendly and enemy forces in the area. The commander will make important decisions based off this information.
     - Outline present weather conditions, players will typically assume that it is daylight with sunny weather.
*/

private _situation = ["diary", ["Situation","
<br/>
Kujari revolutionary visited Anizay so we can hit both local warlord as well as African terrorist.
<br/><br/>
<font size='18'>ENEMY FORCES</font>
<br/>
Expect over two dozen of local militia. They should not expect us but may still have fortified positions. There's a chance of enemy reinforcements coming if you take too long.
<br/><br/>

<font size='18'>FRIENDLY FORCES</font>
<br/>
Friendly UAV is in the air and moving to the AO.

"]];

/* ===============================================
    MISSION
     - Describe any objectives that the team is expected to complete.
     - Summarize(!) the overall task. This MUST be short and clear.
*/

private _mission = ["diary", ["Mission","
<br/>
Move to Anizay and kill two HVTs. They wear fancy clothes.
"]];

/* ===============================================
    EXECUTION
     - Provide an outline as to what the commander of the player's command might give.
*/

private _execution = ["diary", ["Execution","
<br/>
<font size='18'>COMMANDER'S INTENT</font>
<br/>
*** Insert very short summary of plan here. ***
<br/><br/>

<font size='18'>MOVEMENT PLAN</font>
<br/>
*** Insert movement instructions here. ***
<br/><br/>

<font size='18'>FIRE SUPPORT PLAN</font>
<br/>
*** Provide details on any available fire support. ***
<br/><br/>

<font size='18'>SPECIAL TASKS</font>
<br/>
*** Insert instructions for specific units here. ***
"]];

/* ===============================================
    ADMINISTRATION
     - Outline of logistics: available resources (equipment/vehicles) and ideally a summary of their capabilities.
     - Outline of how to use any mission specific features/scripts.
     - Seating capacities of each vehicle available for use.
*/

private _administration = ["diary", ["Administration","
<br/>
Unarmed UAV is moving in to the AO and will be available shortly.
"]];

player createDiaryRecord _administration;
// player createDiaryRecord _execution;
player createDiaryRecord _mission;
player createDiaryRecord _situation;