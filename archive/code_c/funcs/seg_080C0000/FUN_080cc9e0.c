// undefined FUN_080cc9e0(void)
// entry 0x80cc9e0


undefined8 FUN_080cc9e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080cc9fc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080cca3c;
    *(undefined1 *)(iVar2 + 9) = 0x2b;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xac);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = (char)((uint)param_2 >> 8);
    *(char *)(iVar2 + 0x11) = (char)param_2;
    *(undefined4 *)(iVar2 + 0x28) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


