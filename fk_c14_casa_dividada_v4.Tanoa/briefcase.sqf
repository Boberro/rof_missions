params [["_briefcase", objNull], ["_num", 0]];

_briefcase addAction [
    "Pick up the suitcase",
    {
        briefcases_grabbed = briefcases_grabbed + 1;
        publicVariable "briefcases_grabbed";
        deleteVehicle (_this select 0);
    },
    [],
    6,
    false,
    true
];
