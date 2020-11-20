params ["_car", "_car_number"];
if (local _car) then {
    switch (_car_number) do { 
        case 1 : {
            _car setHitPointDamage ["HitBody", 1];
            _car setHitPointDamage ["HitFuel", 1];
            _car setHitPointDamage ["HitLF2Wheel", 1];
            _car setHitPointDamage ["HitRF2Wheel", 1];
            
            _car allowCrewInImmobile true;
            gunner _car doWatch fake_target_1;

            while {alive _car} do {
                sleep 3;

                if (alive hmg_1 && !danger_close_1 && suppress_area_1) then {
                    (gunner _car) doSuppressiveFire hmg_1;
                } else {
                    if (alive hmg_2 && !danger_close_2 && suppress_area_2) then {
                        (gunner _car) doSuppressiveFire suppress_target_2;
                    } else {
                        if (alive hmg_3 && !danger_close_3 && suppress_area_3) then {
                            (gunner _car) doSuppressiveFire hmg_3;
                        };
                    };
                };
            };
        };
        case 2 : {
            _car setHitPointDamage ["HitBody", 1];
            _car setHitPointDamage ["HitFuel", 1];
            _car setHitPointDamage ["HitEngine", 1];
            _car setHitPointDamage ["HitLFWheel", 1];
            _car setHitPointDamage ["HitRFWheel", 1];
            _car setHitPointDamage ["HitGlass1", 1];
            _car setHitPointDamage ["HitGlass2", 1];
        };
        case 3 : {
            _car setHitPointDamage ["HitBody", 1];
            _car setHitPointDamage ["HitFuel", 1];
            _car setHitPointDamage ["HitRFWheel", 1];
            _car setHitPointDamage ["HitRF2Wheel", 1];
        };
        case 4 : {
            _car setHitPointDamage ["HitRFWheel", 1];
            _car setHitPointDamage ["HitRF2Wheel", 1];
            _car setHitPointDamage ["HitLF2Wheel", 1];
            _car setHitPointDamage ["HitEngine", 1];
            _car setHitPointDamage ["HitFuel", 1];
            _car setHitPointDamage ["HitBody", 1];
            _car setHitPointDamage ["HitHull", 0.5];
            
            _car allowCrewInImmobile true;

            gunner _car doWatch fake_target_1;
            sleep 2;
            gunner _car setDamage 1;
        };
    };
};