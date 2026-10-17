// undefined FUN_080cd2dc(void)
// entry 0x80cd2dc


undefined8 FUN_080cd2dc(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080cd32c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080cd330;
    *(undefined1 *)(iVar2 + 9) = 0x2f;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xbc);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


