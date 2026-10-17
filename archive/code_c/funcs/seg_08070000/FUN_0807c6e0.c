// undefined FUN_0807c6e0(void)
// entry 0x807c6e0


undefined4 FUN_0807c6e0(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  FUN_081292b8(local_30,0,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    piVar6 = (int *)(param_1 + 0xb4);
    bVar1 = *piVar6 + 0x7800 < *(int *)(*DAT_0807c744 + 0x54);
    local_2c = *piVar6 + ((uint)bVar1 * 2 + -1) * -0xa800 + 0x7800;
    local_28 = *(undefined4 *)(param_1 + 0x58);
    local_20 = local_28;
    for (uVar7 = 0; (int)uVar7 < 4; uVar7 = uVar7 + 1) {
      local_24 = *piVar6 + *(int *)(uVar7 * 4 + DAT_0807c7cc) + 0x7800;
      iVar5 = FUN_080b0d5c(param_1,&local_2c,&local_24,uVar7 & 0xff);
      if (iVar5 == 0) break;
      local_30[uVar7] = 1;
    }
    if (uVar7 != 4) {
      *(undefined1 *)(param_1 + 0xd4) = 0xf;
      iVar5 = *piVar6 + *(int *)(DAT_0807c7d0 + 8) + 0x7800;
      *(int *)(param_1 + 200) = iVar5;
      *(bool *)(param_1 + 0xbe) = iVar5 < *(int *)(*DAT_0807c7d4 + 0x54);
      *(undefined1 *)(param_1 + 0xd) = 0xc;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_08128f80(param_1,*(undefined4 *)(DAT_0807c7d8 + 0x30));
      return in_lr;
    }
    *DAT_0807c818 = (short)DAT_0807c81c;
    FUN_0807e8c8(param_1,0x14);
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar3 = FUN_0807eb38(local_30,4);
    *(undefined1 *)(param_1 + 0xd5) = uVar3;
    *(undefined1 *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807c8cc) * 4 +
                        DAT_0807c8c8)));
  *(ushort *)(DAT_0807c8d4 + 2) =
       8U - (*(short *)(((uint)*(byte *)(param_1 + 0x12) * 0x8000000 + 0xc0000000 >> 0x17) +
                       DAT_0807c8d0) >> 5) & 0x1f | 0x1000;
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


