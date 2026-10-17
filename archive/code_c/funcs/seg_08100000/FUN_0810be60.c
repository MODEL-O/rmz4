// undefined FUN_0810be60(void)
// entry 0x810be60


undefined4 FUN_0810be60(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar7 = DAT_0810bfcc;
  iVar3 = DAT_0810bf58;
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar8 = 0xff;
    iVar7 = *(int *)(param_1 + 0x28) + DAT_0810bf58;
    uVar10 = (uint)*(byte *)((uint)*(byte *)(iVar7 + 4) + DAT_0810bf54);
    uVar1 = *(ushort *)(DAT_0810bf5c + 4);
    if ((uVar1 & 0x40) != 0) {
      uVar8 = (uint)*(byte *)((*(byte *)(iVar7 + 2) + uVar10) * 4 + DAT_0810bf60);
    }
    if (uVar8 == 0xff) {
      if ((uVar1 & 0x80) != 0) {
        uVar8 = (uint)*(byte *)((*(byte *)(iVar7 + 2) + uVar10) * 4 + DAT_0810bf60 + 1);
      }
      if (uVar8 == 0xff) {
        if ((uVar1 & 0x20) != 0) {
          uVar8 = (uint)*(byte *)((*(byte *)(iVar7 + 2) + uVar10) * 4 + DAT_0810bf60 + 2);
        }
        if ((uVar8 == 0xff) && ((uVar1 & 0x10) != 0)) {
          uVar8 = (uint)*(byte *)((*(byte *)(iVar7 + 2) + uVar10) * 4 + DAT_0810bf60 + 3);
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0x28) + DAT_0810bf58;
    *(undefined1 *)(iVar7 + 3) = *(undefined1 *)(iVar7 + 2);
    if (((uVar8 != 0xff) && (*(char *)(*(int *)(param_1 + 0x28) + 1) == '\x02')) &&
       (*(byte *)(*(int *)(param_1 + 0x28) + 2) < 2)) {
      FUN_08002b10(1);
      *(char *)(*(int *)(param_1 + 0x28) + iVar3 + 2) = (char)uVar8;
      puVar4 = (undefined4 *)(uVar8 * 8 + DAT_0810bf64);
      uVar6 = puVar4[1];
      *(undefined4 *)(param_1 + 100) = *puVar4;
      *(undefined4 *)(param_1 + 0x68) = uVar6;
      *(undefined1 *)(param_1 + 0x12) = 6;
      iVar11 = *(int *)(param_1 + 0x54);
      iVar3 = FUN_08128fb8(*(int *)(param_1 + 100) - iVar11,6);
      *(int *)(param_1 + 0x5c) = iVar3;
      iVar9 = *(int *)(param_1 + 0x58);
      iVar7 = FUN_08128fb8(*(int *)(param_1 + 0x68) - iVar9,6);
      *(int *)(param_1 + 0x60) = iVar7;
      *(undefined1 *)(param_1 + 0x12) = 5;
      *(int *)(param_1 + 0x54) = iVar11 + iVar3;
      *(int *)(param_1 + 0x58) = iVar9 + iVar7;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x28) + DAT_0810bfcc;
    *(undefined1 *)(iVar3 + 3) = *(undefined1 *)(iVar3 + 2);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      puVar4 = (undefined4 *)
               ((uint)*(byte *)(*(int *)(param_1 + 0x28) + iVar7 + 2) * 8 + DAT_0810bfd0);
      uVar6 = puVar4[1];
      *(undefined4 *)(param_1 + 0x54) = *puVar4;
      *(undefined4 *)(param_1 + 0x58) = uVar6;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + DAT_0810bfcc + 5) == '\x02') {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810bfd4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    FUN_0810bd20(param_1);
  }
  else {
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


