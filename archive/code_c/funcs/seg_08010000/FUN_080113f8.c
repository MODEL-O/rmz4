// undefined FUN_080113f8(void)
// entry 0x80113f8


undefined4 FUN_080113f8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  uint local_1c [2];
  
  iVar2 = DAT_080114bc;
  iVar1 = DAT_080114b4;
  if ((*(byte *)(DAT_080114b4 + DAT_080114b8) & 0xf) == 3) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      uVar5 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
      uVar4 = *(uint *)(param_1 + 100);
      *(ushort *)(uVar5 * 2 + DAT_080114bc) = (ushort)uVar4 | 0x45;
      *(undefined4 *)(uVar5 * 4 + iVar2 + 8) = 0;
      FUN_08128be0(*DAT_080114c0 + DAT_080114c4,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
      *(undefined2 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x6a) = 0;
      *(undefined2 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x12) = 0;
      puVar3 = DAT_080114c8;
      *DAT_080114c8 = (short)DAT_080114cc;
      puVar3[1] = 0x1000;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(iVar1 + DAT_080114d4) * 4 + DAT_080114d0));
    if (((*(ushort *)(DAT_080114d8 + 8) & 8) == 0) && ((*(byte *)(DAT_080114d8 + 0x12) & 1) == 0)) {
      *(int *)(*DAT_080114dc + 0x1bc) =
           *(int *)(*DAT_080114dc + 0x1bc) + (int)*(short *)(param_1 + 0x6a);
    }
  }
  else {
    local_1c[0] = (uint)*(byte *)(param_1 + 0xe);
    if (local_1c[0] == 0) {
      FUN_08128be0(local_1c,(*(ushort *)
                              (((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08011518) &
                            0x1f00) * 8 + 0x6000000,DAT_0801151c);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  return in_lr;
}


