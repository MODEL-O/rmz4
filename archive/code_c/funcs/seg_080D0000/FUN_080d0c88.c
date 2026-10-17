// undefined FUN_080d0c88(void)
// entry 0x80d0c88


undefined8 FUN_080d0c88(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d0ce0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    puVar1 = DAT_080d0ce4;
    *(undefined1 *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)*puVar1;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = param_2[1];
    FUN_0801cc9c(iVar2);
    FUN_0801cf00(iVar2,*(undefined1 *)((param_1 & 0xff) + DAT_080d0ce8));
  }
  return CONCAT44(in_lr,iVar2);
}


