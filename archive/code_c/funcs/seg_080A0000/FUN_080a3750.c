// undefined FUN_080a3750(void)
// entry 0x80a3750


undefined4 FUN_080a3750(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x20000 + DAT_080a37b4 >> 0x10);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(iVar8 + 0xb4 + (uint)*(byte *)(param_1 + 0x11) * 4) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 == 1) {
    iVar8 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar8;
    iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar7;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if ((bVar2 & 7) == 0) {
      uVar5 = DAT_080a3920 * *DAT_080a391c + DAT_080a3924;
      local_2c = (((uVar5 & 0x7fffffff) >> 0x10 & 7) - 4) * 0x100 + iVar8;
      uVar5 = DAT_080a3920 * (uVar5 & 0x7fffffff) + DAT_080a3924;
      *DAT_080a391c = uVar5 & 0x7fffffff;
      local_28 = (((uVar5 & 0x7fffffff) >> 0x10 & 7) - 4) * 0x100 + iVar7;
      FUN_080d0c88(1);
    }
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined1 *)(param_1 + 0x12) = 0;
    goto LAB_080a394a;
  }
  if (1 < bVar2) {
    if (bVar2 != 2) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
      uVar5 = *DAT_080a39fc * DAT_080a3a00 + DAT_080a3a04;
      local_24 = *(int *)(param_1 + 0x54) + (8 - ((uVar5 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
      uVar5 = (uVar5 & 0x7fffffff) * DAT_080a3a00 + DAT_080a3a04;
      *DAT_080a39fc = uVar5 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x58) + (8 - ((uVar5 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
      FUN_080e1b14(&local_24,(*(byte *)(param_1 + 0x12) & 0xf) << 4,0x100);
      FUN_080e1c2c(&local_24,(*(byte *)(param_1 + 0x12) & 0xf) << 4,0x100,0x40);
      FUN_08002b10(0x35);
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if (bVar2 < 0x11) {
      return in_lr;
    }
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a3a08);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0x10);
    return in_lr;
  }
  if (bVar2 != 0) {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar5 = DAT_080a3860 * *DAT_080a385c + DAT_080a3864;
    local_34 = *(int *)(param_1 + 0x54) + (8 - ((uVar5 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
    uVar5 = DAT_080a3860 * (uVar5 & 0x7fffffff) + DAT_080a3864;
    local_30 = *(int *)(param_1 + 0x58) + (8 - ((uVar5 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
    uVar5 = DAT_080a3860 * (uVar5 & 0x7fffffff) + DAT_080a3864;
    *DAT_080a385c = uVar5 & 0x7fffffff;
    FUN_080e1b14(&local_34,
                 ((uVar5 & 0x7fffffff) >> 0x10 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                 0x100);
    FUN_08002b10(0x35);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
  bVar2 = *(byte *)(param_1 + 0x11);
  if (bVar2 == 1) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar4 = DAT_080a3888;
LAB_080a389a:
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
LAB_080a389c:
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    }
  }
  else {
    if (bVar2 == 2) {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      goto LAB_080a389c;
    }
    if (bVar2 == 3) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      uVar4 = 0x3c0;
      goto LAB_080a389a;
    }
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
LAB_080a394a:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


