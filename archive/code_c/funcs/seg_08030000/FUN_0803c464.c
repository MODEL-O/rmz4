// undefined FUN_0803c464(void)
// entry 0x803c464


undefined8 FUN_0803c464(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined8 uVar6;
  
  FUN_0803a964(DAT_0803c4b0);
  iVar4 = FUN_08005500(*DAT_0803c4b4);
  iVar2 = DAT_0803c4b8;
  if (iVar4 != 0) {
    iVar1 = -(*(byte *)(param_1 + 0xf8) ^ 1);
    iVar5 = -(iVar1 >> 0x1f);
    *(undefined1 *)(iVar4 + 9) = 1;
    *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 4);
    if (iVar1 < 0 || iVar5 == 0) {
      bVar3 = *(byte *)(iVar4 + 0xb) & 0xbf;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 0xb) | 0x40;
    }
    *(byte *)(iVar4 + 0xb) = bVar3;
    *(undefined1 *)(iVar4 + 0x25) = 0x10;
    *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)((short)iVar5 * 2 + DAT_0803c4fc);
    *(undefined1 *)(iVar4 + 0x22) = *(undefined1 *)((short)iVar5 + DAT_0803c500);
    if (param_2 - 8 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0803c4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(PTR_PTR_0803c504 + (param_2 - 8) * 4))();
      return uVar6;
    }
    FUN_0803a8d4(iVar5,0,1);
    *(byte *)(param_1 + DAT_0803c58c) = param_2;
    *(int *)(iVar4 + 0xb4) = param_1;
    *(byte *)(iVar4 + 0x10) = param_2;
    *(undefined1 *)(iVar4 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar4);
}


