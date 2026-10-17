// undefined FUN_0809f088(void)
// entry 0x809f088


undefined4 FUN_0809f088(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_0801fb14(DAT_0809f0c4,param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (uVar1 >> 8 < 0x21) {
      if (*(char *)(param_1 + 0xb8) == '\0') {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(char *)(param_1 + 0xb8) = '\x01';
        *(undefined1 *)(param_1 + 0x12) = 0x62;
      }
      FUN_0809f328(param_1);
      if (*(int *)(param_1 + 0xc0) == 0) {
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0809f114));
      }
      else {
        FUN_0809f378(param_1);
      }
      FUN_0801cff0(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0xb8) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809f0c8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_0809f12c(param_1);
  }
  return in_lr;
}


