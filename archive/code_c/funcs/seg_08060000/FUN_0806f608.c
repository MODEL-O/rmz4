// undefined FUN_0806f608(void)
// entry 0x806f608


undefined4 FUN_0806f608(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((*(ushort *)(DAT_0806f650 + 8) & 8) != 0)) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0806f684));
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + 0xc000;
    FUN_08018eac(&local_10);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0806f654);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0806f688(param_1);
  }
  return in_lr;
}


