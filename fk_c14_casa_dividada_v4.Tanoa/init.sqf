STUI_Occlusion = false;

// mission stuff
{
  _x enableGunLights "forceOn";
} forEach (allUnits select {(side _x == opfor) and (local _x)});

if (isServer) then {
    briefcases_grabbed = 0;
    publicVariable "briefcases_grabbed";
};
