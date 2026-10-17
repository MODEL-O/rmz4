// undefined FUN_080e37a0(void)
// entry 0x80e37a0


undefined8 FUN_080e37a0(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080e37fc);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e3800;
    *(undefined1 *)(iVar2 + 9) = 0x47;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x11c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = (char)((uint)param_2 >> 8);
    *(char *)(iVar2 + 0x11) = (char)param_2;
    *(undefined1 *)(iVar2 + 0x75) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


