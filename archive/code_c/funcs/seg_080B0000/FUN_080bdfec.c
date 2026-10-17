// undefined FUN_080bdfec(void)
// entry 0x80bdfec


undefined4 FUN_080bdfec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080be02c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080be030;
    *(undefined1 *)(iVar2 + 9) = 2;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 8);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x54) = param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
  }
  return in_lr;
}


