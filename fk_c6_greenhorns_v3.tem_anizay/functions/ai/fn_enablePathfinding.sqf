params [["_trigger", objNull]];
if (!isServer) exitWith {};
if (isNull _trigger) exitWith {};

// Get all enemy units in trigger
private _side = east;
private _trigger_area = triggerArea _trigger;
private _a = _trigger_area select 0;
private _b = _trigger_area select 1;
private _is_rect = _trigger_area select 3;
private _r = _a max _b;
if (_is_rect) then { _r = _r * 1.5; };
private _units = (nearestObjects [player, ["Man"], _r]) select {(_x inArea _trigger) && (side _x == _side)};

{
    [[_x, "PATH"], "enableAI", _x, false] call BIS_fnc_MP;
} forEach _units;
