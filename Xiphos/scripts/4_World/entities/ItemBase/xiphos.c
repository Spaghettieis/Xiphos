class seis_Xiphos_base extends ToolBase
{
	void seis_Xiphos_base()
	{
	}

	override bool IsMeleeFinisher()
	{
		return false;
	}
		
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionSkinning);
		AddAction(ActionMineBush);
		AddAction(ActionMineTreeBark);
		AddAction(ActionClapBearTrapWithThisItem);
	}
}
class seis_Xiphos_bestblade extends ToolBase
{
	void seis_Xiphos_bestblade()
	{
	}

	override bool IsMeleeFinisher()
	{
		return false;
	}
		
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionSkinning);
		AddAction(ActionMineBush);
		AddAction(ActionMineTreeBark);
		AddAction(ActionClapBearTrapWithThisItem);
	}
}
class seis_Xiphos_vorpal extends ToolBase
{
	void seis_Xiphos_vorpal()
	{
	}

	override bool IsMeleeFinisher()
	{
		return false;
	}
		
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionSkinning);
		AddAction(ActionMineBush);
		AddAction(ActionMineTreeBark);
		AddAction(ActionClapBearTrapWithThisItem);
	}
}