// undefined FUN_0804d448(void)
// entry 0x804d448


undefined4 FUN_0804d448(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar8 + 0x150) == -1) {
    *(byte *)(iVar8 + DAT_0804d4a0) = *(byte *)(iVar8 + DAT_0804d4a0) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804d4a4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xe) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    cVar1 = FUN_0803aabc(iVar8);
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0804d4ee;
    }
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x2a);
    iVar6 = DAT_0804d4e4;
LAB_0804d508:
    *(byte *)(iVar8 + iVar6) = *(byte *)(iVar8 + iVar6) | 0x40;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804d528);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  else {
LAB_0804d4ee:
    if (*(char *)(param_1 + 0xd) == '\0') {
      bVar2 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2 + 1;
      if (3 < bVar2) {
        *(undefined1 *)(param_1 + 0x12) = 0;
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2 + 1;
      iVar6 = DAT_0804d524;
      if (3 < bVar2) goto LAB_0804d508;
    }
    bVar2 = *(byte *)(iVar8 + 10) >> 4;
    bVar5 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
    uVar7 = (uint)(*(char *)(iVar8 + 0x71) == '\x03');
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(iVar8 + 0x54) +
              *(int *)(uVar7 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10 + DAT_0804d5f0);
      iVar6 = DAT_0804d5f0;
    }
    else {
      iVar4 = *(int *)(iVar8 + 0x54) -
              *(int *)(uVar7 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10 + DAT_0804d5ac);
      iVar6 = DAT_0804d5ac;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar8 + 0x58) +
         *(int *)(uVar7 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10 + iVar6 + 4);
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)((uint)*(byte *)(iVar8 + 0x150) + DAT_0804d5f4)
    ;
  }
  return in_lr;
}


