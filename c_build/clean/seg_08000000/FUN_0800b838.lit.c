// undefined FUN_0800b838(void)
// entry 0x800b838


void FUN_0800b838(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  uVar6 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar5 = *(uint *)(param_1 + 100);
    *(ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + 0x02000a04) =
         (ushort)uVar5 | 0x47;
    if (uVar6 == 0x12) {
      FUN_08128be0((*(int *)0x08b2c0b4) + 0x08b2c0bc,0x0202cad4,0x200);
    }
    else {
      FUN_08128be0((*(int *)0x08b2c0b4) + 0x08b2c0bc,(uVar5 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)((uVar6 >> 4) * 4 + 0x02000a0c) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = 0x02000ab0;
  uVar1 = *(ushort *)(0x02000ab0 + 0x0002d032);
  if ((uVar1 != 0) && (uVar1 < 0x100)) {
    *(ushort *)(0x02000ab0 + 0x0002d032) = uVar1 + 1;
  }
  *(short *)(iVar2 + 0x0002d046) = *(short *)(iVar2 + 0x0002d046) + 0x20;
  iVar3 = 0x0002d044;
  *(short *)(iVar2 + 0x0002d044) = *(short *)(iVar2 + 0x0002d044) + 0x50;
  *(short *)(iVar2 + 0x0002d042) = *(short *)(iVar2 + 0x0002d042) + 0xa0;
  psVar4 = (short *)(iVar2 + iVar3 + -4);
  *psVar4 = *psVar4 + 0xf0;
  *(short *)(iVar2 + 0x0002d03e) = *(short *)(iVar2 + 0x0002d03e) + 400;
  *(short *)(iVar2 + 0x0002d03c) = *(short *)(iVar2 + 0x0002d03c) + 0x280;
  *(short *)(iVar2 + 0x0002d03a) = *(short *)(iVar2 + 0x0002d03a) + 0x620;
  *(short *)(iVar2 + 0x0002d038) = *(short *)(iVar2 + 0x0002d038) + 0x800;
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) ^ 1;
  return;
}


