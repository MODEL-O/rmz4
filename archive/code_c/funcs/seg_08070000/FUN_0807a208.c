// undefined FUN_0807a208(void)
// entry 0x807a208


undefined4 FUN_0807a208(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort *puVar10;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0807a37c);
    FUN_08002b10(DAT_0807a380);
    uVar8 = *DAT_0807a384 * DAT_0807a388 + DAT_0807a38c;
    *DAT_0807a384 = uVar8 & 0x7fffffff;
    uVar6 = FUN_08129198((uVar8 & 0x7fffffff) >> 0x10,6);
    *(undefined1 *)(param_1 + 0x13) = uVar6;
    iVar2 = DAT_0807a390;
    *(undefined2 *)(DAT_0807a390 + 0x88) = 0x3b8;
    puVar10 = (ushort *)(DAT_0807a394 + 0x88);
    *puVar10 = 9;
    iVar3 = DAT_0807a398;
    FUN_08001d30(DAT_0807a398 + 0x550,
                 (0x3b8 - (uint)(*(ushort *)(DAT_0807a398 + 0x556) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0807a39c + 0x550,
                 ((uint)*puVar10 - (uint)*(byte *)(DAT_0807a39c + 0x557)) * 0x20 + 0x200);
    iVar4 = DAT_0807a3a0;
    FUN_08001d30(DAT_0807a3a0 + iVar3,
                 ((uint)*(ushort *)(iVar2 + 0x1ae) -
                 (uint)(*(ushort *)(DAT_0807a3a0 + iVar3 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar4 + DAT_0807a39c,
                 ((uint)*DAT_0807a3a4 - (uint)*(byte *)(iVar4 + DAT_0807a39c + 7)) * 0x20 + 0x200);
    iVar5 = DAT_0807a3bc;
    iVar4 = DAT_0807a3b4;
    iVar3 = DAT_0807a3ac;
    iVar2 = DAT_0807a3a8;
    local_28 = *(int *)(DAT_0807a3a8 + 0x38) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_0807a3ac) * 4 +
                       DAT_0807a3b0) + DAT_0807a3b4;
    local_24 = *(int *)(DAT_0807a3a8 + 0x3c) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_0807a3ac) * 4 +
                       DAT_0807a3b8) + DAT_0807a3bc;
    FUN_080e41b8(&local_28,0,0);
    local_28 = *(int *)(iVar2 + 0x38) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + iVar3 + 1) * 4 +
                       DAT_0807a3b0) + iVar4;
    local_24 = *(int *)(iVar2 + 0x3c) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + iVar3 + 1) * 4 +
                       DAT_0807a3b8) + iVar5;
    FUN_080e41b8(&local_28,0,0);
    FUN_0800249c(0x88,0x2c0);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_080025d8(0x88);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_0807a4bc)
       && (*(char *)(param_1 + 0x73) == '\x03')) {
      FUN_0801cf00(param_1,DAT_0807a4bc - 2);
      FUN_0801cff0(param_1);
    }
    cVar7 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar7;
    iVar4 = DAT_0807a4d4;
    iVar3 = DAT_0807a4c4;
    iVar2 = DAT_0807a4c0;
    if (cVar7 != -1) {
      return in_lr;
    }
    local_28 = *(int *)(DAT_0807a4c0 + 0x38) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_0807a4c4) * 4 +
                       DAT_0807a4c8) + DAT_0807a4cc;
    local_24 = *(int *)(DAT_0807a4c0 + 0x3c) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_0807a4c4) * 4 +
                       DAT_0807a4d0) + DAT_0807a4d4;
    uVar9 = FUN_080965b8(&local_28,0,0);
    *(undefined4 *)(param_1 + 200) = uVar9;
    local_28 = *(int *)(iVar2 + 0x38) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + iVar3 + 1) * 4 +
                       DAT_0807a4c8) + DAT_0807a4cc;
    local_24 = *(int *)(iVar2 + 0x3c) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + iVar3 + 1) * 4 +
                       DAT_0807a4d0) + iVar4;
    uVar9 = FUN_080965b8(&local_28,0,0);
    *(undefined4 *)(param_1 + 0xcc) = uVar9;
    uVar6 = 0x78;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      cVar7 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar7;
      if (cVar7 != -1) {
        return in_lr;
      }
      FUN_08002624(0x88);
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807a3e8);
    FUN_0801cff0(param_1);
    uVar6 = 0x1e;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar6;
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


