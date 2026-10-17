// undefined FUN_0803a308(void)
// entry 0x803a308


undefined8 FUN_0803a308(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  bool bVar2;
  
  if ((*(uint *)(param_1 + 600) & 0x20000) == 0) {
    bVar2 = (*DAT_0803a350 & 0x80) == 0;
    if (bVar2) {
      uVar1 = *(undefined4 *)((uint)*(byte *)(param_1 + 0xc3) * 4 + DAT_0803a388);
    }
    else {
      uVar1 = *(undefined4 *)((uint)*(byte *)(param_1 + 0xc3) * 4 + DAT_0803a354);
    }
    uVar1 = FUN_08128f84(param_1,!bVar2,uVar1);
    if (((byte)(*(char *)(param_1 + 0xc3) - 7U) < 2) || (*(char *)(param_1 + 0xc3) == '\x05')) {
      FUN_08002b10(0x1b);
    }
    else {
      FUN_08002b10(0x46);
    }
  }
  else {
    uVar1 = FUN_08040c98(param_1);
    FUN_08002b10(0x46);
  }
  return CONCAT44(in_lr,uVar1);
}


