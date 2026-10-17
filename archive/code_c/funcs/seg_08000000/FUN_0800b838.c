// undefined FUN_0800b838(void)
// entry 0x800b838


undefined4 FUN_0800b838(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar5 = *(uint *)(param_1 + 100);
    *(ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0800b870) =
         (ushort)uVar5 | 0x47;
    if (uVar6 == 0x12) {
      FUN_08128be0(*DAT_0800b874 + DAT_0800b878,DAT_0800b87c,0x200);
    }
    else {
      FUN_08128be0(*DAT_0800b940 + DAT_0800b944,(uVar5 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)((uVar6 >> 4) * 4 + DAT_0800b948) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = DAT_0800b94c;
  uVar1 = *(ushort *)(DAT_0800b94c + DAT_0800b950);
  if ((uVar1 != 0) && (uVar1 < 0x100)) {
    *(ushort *)(DAT_0800b94c + DAT_0800b950) = uVar1 + 1;
  }
  *(short *)(iVar2 + DAT_0800b954) = *(short *)(iVar2 + DAT_0800b954) + 0x20;
  iVar3 = DAT_0800b958;
  *(short *)(iVar2 + DAT_0800b958) = *(short *)(iVar2 + DAT_0800b958) + 0x50;
  *(short *)(iVar2 + DAT_0800b95c) = *(short *)(iVar2 + DAT_0800b95c) + 0xa0;
  psVar4 = (short *)(iVar2 + iVar3 + -4);
  *psVar4 = *psVar4 + 0xf0;
  *(short *)(iVar2 + DAT_0800b960) = *(short *)(iVar2 + DAT_0800b960) + 400;
  *(short *)(iVar2 + DAT_0800b964) = *(short *)(iVar2 + DAT_0800b964) + 0x280;
  *(short *)(iVar2 + DAT_0800b968) = *(short *)(iVar2 + DAT_0800b968) + 0x620;
  *(short *)(iVar2 + DAT_0800b96c) = *(short *)(iVar2 + DAT_0800b96c) + 0x800;
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) ^ 1;
  return in_lr;
}


