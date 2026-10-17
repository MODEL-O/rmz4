// undefined FUN_08052514(void)
// entry 0x8052514


undefined4 FUN_08052514(int param_1)

{
  byte bVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  cVar3 = *(char *)(param_1 + 0xe);
  if (cVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_0805254c);
    if (*(char *)(param_1 + 0xe2) == '\0') {
      FUN_08002b10(0xe9);
    }
    uVar4 = DAT_08052550;
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      uVar4 = 0x2c0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined1 *)(param_1 + 0x12) = 0x15;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
LAB_080525a0:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (cVar3 == '\x01') {
    uVar4 = DAT_08052580;
    if ('\x02' < *(char *)(param_1 + 0x71)) {
LAB_0805259c:
      FUN_08005784(param_1 + 0x74,uVar4);
      goto LAB_080525a0;
    }
  }
  else if ((cVar3 == '\x02') && (uVar4 = DAT_080525d0, '\x04' < *(char *)(param_1 + 0x71)))
  goto LAB_0805259c;
  FUN_0801cff0(param_1);
  iVar6 = DAT_08052634;
  iVar7 = DAT_08052630;
  puVar2 = DAT_0805262c;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) < '\n') {
      return in_lr;
    }
    FUN_08002b10(0xeb);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  if ((bVar1 & 1) != 0) {
    iVar8 = *(int *)(param_1 + 0x54);
    uVar5 = DAT_08052630 * *DAT_0805262c + DAT_08052634;
    *DAT_0805262c = uVar5 & 0x7fffffff;
    local_24 = iVar8 + 0x1000 + ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
    if ((bVar1 & 3) == 1) {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_20 = FUN_08008534(iVar8,*(undefined4 *)(param_1 + 0x58));
        uVar4 = DAT_0805264c;
      }
      else {
        local_20 = FUN_08008748(iVar8,*(undefined4 *)(param_1 + 0x58));
        uVar4 = DAT_08052638;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_20 = FUN_08008534(iVar8,*(undefined4 *)(param_1 + 0x58));
        uVar4 = DAT_080526cc;
        uVar5 = iVar7 * *puVar2 + iVar6;
        *puVar2 = uVar5 & 0x7fffffff;
        FUN_080d4c8c(&local_24,uVar4,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
        goto LAB_080526b6;
      }
      local_20 = FUN_08008748(iVar8,*(undefined4 *)(param_1 + 0x58));
      uVar4 = DAT_08052688;
    }
    uVar5 = iVar7 * *puVar2 + iVar6;
    *puVar2 = uVar5 & 0x7fffffff;
    FUN_080d4c8c(&local_24,uVar4,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
  }
LAB_080526b6:
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 3) < 2) {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar7 = 0x100;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar7 = DAT_08052704;
  }
  *(int *)(param_1 + 0x54) = iVar6 + iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x11;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


