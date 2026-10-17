// undefined FUN_0804adb4(void)
// entry 0x804adb4


undefined8 FUN_0804adb4(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0804ae20);
  iVar1 = DAT_0804ae24;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 9) = 0x27;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x9c);
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = *DAT_0804ae28;
    *(undefined1 *)(iVar2 + 0x22) = *DAT_0804ae2c;
    *(undefined4 *)(iVar2 + 0xb8) = param_1;
    *(undefined4 *)(iVar2 + 0xb4) = param_2;
    *(char *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    if (param_3 == '\0') {
      FUN_0804adb4(param_1,iVar2,1);
    }
  }
  return CONCAT44(in_lr,iVar2);
}


