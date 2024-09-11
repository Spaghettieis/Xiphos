modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
        super.RegisterOneHanded(pType, pBehavior);
        	pType.AddItemInHandsProfileIK("seis_Xiphos_base",
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
		"dz/anims/anm/player/ik/gear/machete.anm");

        super.RegisterOneHanded(pType, pBehavior);
        	pType.AddItemInHandsProfileIK("seis_Xiphos_bestblade",
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
		"dz/anims/anm/player/ik/gear/machete.anm");

        super.RegisterOneHanded(pType, pBehavior);
        	pType.AddItemInHandsProfileIK("seis_Xiphos_vorpal",
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
		"dz/anims/anm/player/ik/gear/machete.anm");

    };
};