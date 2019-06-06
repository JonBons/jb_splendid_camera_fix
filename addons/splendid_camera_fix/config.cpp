class CfgPatches
{
	class jb_splendid_camera_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"A3_Data_F",
			"A3_Functions_F",
		};
		author = "JonBons";
		url = "http://jonbons.com";
	};
};

class CfgFunctions
{
    class A3 {
        class Debug {
            class camera {
                file = "\z\jb\addons\splendid_camera_fix\functions\fn_camera.sqf";
            };
        };
    };
};
