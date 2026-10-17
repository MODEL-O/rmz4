// undefined FUN_080d4ae0(void)
// entry 0x80d4ae0


undefined8 FUN_080d4ae0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d4b3c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d4b40;
    *(undefined1 *)(iVar2 + 9) = 0xf;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x3c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = param_2[1];
    *(undefined1 *)(iVar2 + 0x10) = 0;
    FUN_0801cc9c(iVar2);
    FUN_0801cf00(iVar2,*(undefined2 *)((param_1 & 0xff) * 2 + DAT_080d4b44));
  }
  return CONCAT44(in_lr,iVar2);
}


