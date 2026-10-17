// undefined FUN_0805a688(void)
// entry 0x805a688


undefined4 FUN_0805a688(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 10);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0805a80c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar8 = *(int *)(param_1 + 200);
    if ((iVar8 != 0) && (*(char *)(param_1 + 0xbf) == '\0')) {
      *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xfc;
      *(undefined4 *)(iVar8 + 0x8c) = 0;
      *(undefined4 *)(iVar8 + 0x90) = 0;
      *(undefined1 *)(iVar8 + 0x94) = 0;
      *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xfb;
      piVar4 = (int *)((uint)*(byte *)(iVar8 + 9) * 4 + DAT_0805a768);
      *(undefined4 *)(iVar8 + 0xc) = 3;
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
      *(int *)(param_1 + 200) = 0;
      *(char *)(param_1 + 0xbf) = -1;
    }
    FUN_08005784(param_1 + 0x74,DAT_0805a76c);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805a770) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    uVar6 = (bVar2 >> 4 & 1) + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    if (uVar6 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar7 = uVar6 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar7 * 0x240;
    iVar8 = iVar7 * -0x20;
    *(int *)(param_1 + 100) = iVar8;
    *(int *)(param_1 + 0x68) = iVar7;
    iVar5 = FUN_08128fb8(iVar7 * -0x240,iVar8);
    *(int *)(param_1 + 0x60) = iVar7 * ((iVar7 * 0x480 + iVar8 * iVar5) * (iVar5 + 1) >> 1);
    if (uVar6 == 0) {
      iVar8 = FUN_0805c3a8(param_1);
      iVar5 = 0xd000;
    }
    else {
      iVar8 = FUN_0805c3a8(param_1);
      iVar5 = 0x2000;
    }
    *(int *)(param_1 + 0xc0) = iVar8 + iVar5;
    cVar3 = FUN_08128fb8(-*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 100));
    *(char *)(param_1 + 0x12) = cVar3 + '\x01';
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar8 = *(int *)(param_1 + 0x68) * (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x54));
  if (iVar8 - *(int *)(param_1 + 0x60) != 0 && *(int *)(param_1 + 0x60) <= iVar8) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    return in_lr;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0805a80c:
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  return in_lr;
}


