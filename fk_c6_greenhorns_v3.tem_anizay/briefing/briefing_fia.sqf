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
So here it is. Our first week in Kujari and already we got half the squad eliminated in an ambush...<br/>
An IED exploded just as we crossed <marker name='marker_3'>this crossroad</marker>, then <marker name='ambush_1'>heavy machinegun opened up on us from the west</marker>, and <marker name='ambush_0'>RPG fire from behind us</marker> knocked out last car. Closing vehicle got the worst of that attack - Ramirez died on the spot, three others are dying and right now Doc has his hands full trying to keep them breathing.<br/>
We called in a MEDEVAC, but as a helicopter approached <marker name='destroy_1'>two</marker> <marker name='destroy_2'>more</marker> machineguns started firing on it - it looks like insurgents didn't finish what they started only to lure the bird in. Helicopter retreated, but the base refuses to give us mortar or air strike support - apparently there's rich civilian presence in the area and they can't risk any collateral damage, although it sounds like they just don't want to risk it to save some fresh meat from National Guard. They told us to wait for a relief force, but it doesn't look like our we can wait any longer - who knows when the enemy will decide to simply finish us off and retreat?
<br/><br/>
<font size='18'>ENEMY FORCES</font>
<br/>
We know of at least two groups that attacked us (<marker name='ambush_0'>#1</marker> <marker name='ambush_3'>#2</marker>), and additional two HMGs (<marker name='destroy_1'>#1</marker> <marker name='destroy_2'>#2</marker>) to the north-west. At least two dozen men, more if we wait. So far no technicals.
<br/><br/>

<font size='18'>FRIENDLY FORCES</font>
<br/>
Lee, Gunner of the front vehicle can't walk, but feels good enough to stay on the gun. He shall provide us some covering fire.<br/>
We can call in MEDEVAC as soon as we make sure nothing would light it up.<br/>
Base claims there's friendly reinforcements coming soon, but we can't wait.
"]];
/* ===============================================
    MISSION
     - Describe any objectives that the team is expected to complete.
     - Summarize(!) the overall task. This MUST be short and clear.
*/

private _mission = ["diary", ["Mission","
<br/>
Neutralize enemy HMGs <marker name='destroy_0'>here</marker>, <marker name='destroy_1'>here</marker> and <marker name='destroy_2'>here</marker> so MEDEVAC can land before enemy makes a final charge on our position.
"]];

/* ===============================================
    EXECUTION
     - Provide an outline as to what the commander of the player's command might give.
*/

private _execution = ["diary", ["Execution","
<br/>
<font size='18'>COMMANDER'S INTENT</font>
<br/>
Quickly neutralize enemy machineguns and secure the wounded for evacuation.
<br/><br/>

<font size='18'>MOVEMENT PLAN</font>
<br/>
Quickly move through compounds with HMGs and eliminate them. Don't clean whole AO as we don't have time nor resources to do that.
<br/><br/>

<font size='18'>FIRE SUPPORT PLAN</font>
<br/>
Lee, Gunner of the front vehicle can't walk, but feels good enough to stay on the gun. He shall provide us some covering fire.<br/>
<br/>

<font size='18'>SPECIAL TASKS</font>
<br/>
Make sure those left with the wounded don't get killed.
"]];

/* ===============================================
    ADMINISTRATION
     - Outline of logistics: available resources (equipment/vehicles) and ideally a summary of their capabilities.
     - Outline of how to use any mission specific features/scripts.
     - Seating capacities of each vehicle available for use.
*/

private _administration = ["diary", ["Administration","
<br/>
Lee, Gunner of the front vehicle can't walk, but feels good enough to stay on the gun. He shall provide us some covering fire.<br/>
Medic stays with the wounded.
"]];

player createDiaryRecord _administration;
player createDiaryRecord _execution;
player createDiaryRecord _mission;
player createDiaryRecord _situation;