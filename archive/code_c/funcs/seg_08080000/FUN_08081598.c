// undefined FUN_08081598(void)
// entry 0x8081598


undefined4 FUN_08081598(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_lr;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_34[0] = *DAT_080815f0;
    local_34[1] = DAT_080815f0[1];
    local_34[2] = DAT_080815f0[2];
    local_34[3] = DAT_080815f0[3];
    local_24 = *DAT_080815f4;
    uStack_20 = DAT_080815f4[1];
    uStack_1c = DAT_080815f4[2];
    local_18 = DAT_080815f4[3];
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,*(undefined2 *)(local_34 + *(byte *)(param_1 + 0xb4)));
    bVar3 = *(byte *)(&local_24 + *(byte *)(param_1 + 0xb4));
    if (bVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    bVar3 = bVar3 & 1;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080816a0);
  }
  else {
    FUN_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                           ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                           *(undefined1 *)(param_1 + 0x70)) + DAT_08081674) * 8 +
                          DAT_08081670)));
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


