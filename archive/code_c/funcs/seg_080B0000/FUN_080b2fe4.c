// undefined FUN_080b2fe4(void)
// entry 0x80b2fe4


undefined4 FUN_080b2fe4(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801ce54();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 1;
    FUN_0801cf00(param_1,DAT_080b30c0);
    *(undefined1 *)(param_1 + 0x13) = 0x28;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
  }
  *(ushort *)(param_1 + 0x50) = (ushort)(*(byte *)(param_1 + 0x13) >> 2) << 4;
  *(ushort *)(param_1 + 0x52) = (ushort)(*(byte *)(param_1 + 0x13) >> 2) << 4;
  if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
    FUN_080e67ac(param_1 + 0x54,*(undefined1 *)(param_1 + 0x12),*(byte *)(param_1 + 10) >> 4 & 1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (5 < bVar1) {
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
  }
  cVar2 = FUN_080b3804(param_1);
  if (cVar2 != '\0') {
    FUN_0802ab88(0,0x20,param_1 + 0x54);
    if (*(ushort *)(DAT_080b30c4 + 0xc) <= DAT_080b30c8) {
      *(ushort *)(DAT_080b30c4 + 0xc) = *(ushort *)(DAT_080b30c4 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b30cc);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
    FUN_08006984(0x24);
  }
  return in_lr;
}


