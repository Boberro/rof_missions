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
Two VIP's, with connections to both government and the underworld meet up in Ravi-Ta Island hotel resort. Two different client asked us to liberate documents from each VIP. Both clients made it clear that they want both men alive.
<br/><br/>
<font size='18'>ENEMY FORCES</font>
<br/>
Normally, this hotel resort is proud of it's high level of security, but now with VIP's being there, they on their toes. Expect armed patrols around the hotel. It's also certain that both targets came with their own bodyguards.
"]];

/* ===============================================
    MISSION
     - Describe any objectives that the team is expected to complete.
     - Summarize(!) the overall task. This MUST be short and clear.
*/

private _mission = ["diary", ["Mission","
<br/>
Steal documents from the meeting taking place in Ravi-Ta Island hotel resort. Do not kill any of the VIP's
"]];

/* ===============================================
    EXECUTION
     - Provide an outline as to what the commander of the player's command might give.
*/

private _execution = ["diary", ["Execution","
<br/>
<font size='18'>COMMANDER'S INTENT</font>
<br/>
Steal documents from the meeting taking place in Ravi-Ta Island hotel resort. Do not kill any of the VIP's'
<br/><br/>

<font size='18'>MOVEMENT PLAN</font>
<br/>
We're inserting with a HALO drop. After we grab the documents, in order to exfiltration we can steal boats from the pier.
<br/><br/>

<font size='18'>FIRE SUPPORT PLAN</font>
<br/>
*** Provide details on any available fire support. ***
<br/><br/>

<font size='18'>SPECIAL TASKS</font>
<br/>
DO NOT kill any of the VIP's
"]];

/* ===============================================
    ADMINISTRATION
     - Outline of logistics: available resources (equipment/vehicles) and ideally a summary of their capabilities.
     - Outline of how to use any mission specific features/scripts.
     - Seating capacities of each vehicle available for use.
*/

private _administration = ["diary", ["Administration","
<br/>
We're inserting with a HALO drop. After we grab the documents, in order to exfiltration we can steal boats from the pier.
"]];

player createDiaryRecord _administration;
player createDiaryRecord _execution;
player createDiaryRecord _mission;
player createDiaryRecord _situation;