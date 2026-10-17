// undefined FUN_08048e3c(void)
// entry 0x8048e3c


undefined4 FUN_08048e3c(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0xbd) == '\0') && ((*(uint *)(param_1 + 0x8c) & DAT_08048edc) != 0)) {
    *(char *)(param_1 + 0xbd) = '\x01';
  }
  pbVar3 = (byte *)(iVar9 + 0x150);
  if (*pbVar3 == 0xff) {
    if ((*(char *)(param_1 + 0xbd) != '\0') && (cVar1 = FUN_0803aabc(iVar9), cVar1 != '\0')) {
      FUN_080d0c88(1,param_1 + 0x54);
      FUN_08002b10(0x2a);
    }
    *(byte *)(iVar9 + DAT_08048ee0) = *(byte *)(iVar9 + DAT_08048ee0) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08048ee4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x71);
    iVar10 = (*(byte *)(param_1 + 0x13) & 0x7f) << 1;
    if ((DAT_08048f2c & *(uint *)(param_1 + 0x8c)) == 0) {
      uVar5 = DAT_08048f54;
      if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_08049004;
    }
    else {
      if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
        FUN_08002b10(0x2b);
      }
      uVar5 = (uint)*(ushort *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_08048f30);
    }
    FUN_0801cf00(param_1,uVar5);
    FUN_0801cff0(param_1);
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar10 = (*(byte *)(param_1 + 0x13) & 0x7f) << 1;
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
      FUN_08002b10(0x2b);
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if (0x1f < bVar2) {
      FUN_0801cfc8(param_1,DAT_08048fbc,4 - (ushort)*(byte *)(param_1 + 0x13),2);
      FUN_0801cff0(param_1);
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined1 *)(param_1 + 0xf) = 2;
    }
  }
  else {
    *(char *)(param_1 + 0x13) = '\x04' - *(char *)(param_1 + 0x71);
    iVar10 = (*(byte *)(param_1 + 0x13) & 0x7f) << 1;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(iVar9 + DAT_08048ffc) = *(byte *)(iVar9 + DAT_08048ffc) | 0x40;
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08049000);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
      return in_lr;
    }
  }
LAB_08049004:
  bVar2 = *(byte *)(iVar9 + 10) >> 4;
  bVar7 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
  uVar5 = (uint)(*(char *)(iVar9 + 0x71) == '\x03');
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = *(int *)(iVar9 + 0x54) + *(int *)(uVar5 * 8 + (uint)*pbVar3 * 0x10 + DAT_080490d4);
    iVar8 = DAT_080490d4;
  }
  else {
    iVar6 = *(int *)(iVar9 + 0x54) - *(int *)(uVar5 * 8 + (uint)*pbVar3 * 0x10 + DAT_0804906c);
    iVar8 = DAT_0804906c;
  }
  *(int *)(param_1 + 0x54) = iVar6;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar9 + 0x58) + *(int *)(uVar5 * 8 + (uint)*pbVar3 * 0x10 + iVar8 + 4);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)((uint)*pbVar3 + DAT_080490d8);
  FUN_08005794(param_1 + 0x74,iVar10 * 0x18 + DAT_080490dc,0xffffffff,0xffffffff,0xffffffff,
               *(byte *)(param_1 + 0x12) >> 2);
  return in_lr;
}


