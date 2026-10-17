// undefined FUN_0800b038(void)
// entry 0x800b038


void FUN_0800b038(int param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar3 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800b0bc);
    *puVar3 = (ushort)DAT_0800b0c0 & *puVar3 | 1;
    puVar1 = DAT_0800b0c4;
    *(int *)DAT_0800b0c4 = (short)DAT_0800b0c8;
    puVar1[1] = 0x10;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(char *)(param_1 + 0xe) == '\x01') && ((*(byte *)(DAT_0800b0cc + DAT_0800b0d0) & 1) != 0))
     && (uVar2 = *(short *)(param_1 + 0x10) - 1, *(ushort *)(param_1 + 0x10) = uVar2,
        (uVar2 & 1) == 0)) {
    uVar2 = DAT_0800b0c4[1] & 0x1f;
    if ((DAT_0800b0c4[1] & 0x1f) != 0) {
      if (*(int *)(*(int *)(DAT_0800b0d4 + DAT_0800b0d8) + 0x54) <= DAT_0800b0dc) {
        DAT_0800b0c4[1] = uVar2 - 1 & 0x1f | (0x10 - uVar2) * 0x100;
        goto LAB_0800b0ea;
      }
      DAT_0800b0c4[1] = 0x1000;
    }
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
LAB_0800b0ea:
  if (*(char *)(param_1 + 0xe) == '\x02') {
    *(int *)DAT_0800b10c = *(int *)DAT_0800b10c & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    *(int *)DAT_0800b110 = 0;
    *(undefined1 *)(param_1 + 0xe) = 3;
  }
  return;
}


