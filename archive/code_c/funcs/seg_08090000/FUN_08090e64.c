// undefined FUN_08090e64(void)
// entry 0x8090e64


undefined8 FUN_08090e64(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08090eb4);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_08090eb8;
    *(undefined1 *)(iVar2 + 9) = 0x16;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x58);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 2;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


