// undefined FUN_0803bfcc(void)
// entry 0x803bfcc


undefined4 FUN_0803bfcc(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar10 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined1 *)(DAT_0803c034 + iVar4) = 2;
    uVar7 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar4 + 0x15c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar4 + 0x160) = uVar7;
    pbVar5 = (byte *)(iVar4 + 0x164);
    if (0x40 < *pbVar5) {
      *pbVar5 = 0x40;
    }
    puVar8 = (undefined1 *)(param_1 + 0x70);
    uVar9 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar8);
    if (uVar9 == 0x7000) {
      if (7 < *pbVar5) {
        FUN_0801cf00(param_1,DAT_0803c038);
      }
    }
    else if ((uVar9 == DAT_0803c074) && (0xf < *pbVar5)) {
      FUN_0801cf00(param_1,DAT_0803c078);
    }
    if (*(byte *)(iVar10 + 0xc) < 2) {
      if ((*(byte *)(iVar10 + 10) & 0x10) == 0) {
        *(int *)(param_1 + 0x54) = *(int *)(iVar10 + 0x54) + DAT_0803c104;
        uVar7 = DAT_0803c108;
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(iVar10 + 0x54) + 0xe00;
        uVar7 = 0x600;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar7;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar10 + 0x58);
      uVar9 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar8);
      if (uVar9 == 0x7000) {
        iVar10 = 0xe;
      }
      else {
        iVar10 = 0x12;
        if (uVar9 == DAT_0803c158) {
          iVar10 = 0x10;
        }
      }
      bVar1 = *pbVar5;
      cVar2 = FUN_0803a4a8(iVar4);
      cVar2 = bVar1 + 1 + cVar2;
      cVar3 = FUN_08038a78(iVar4);
      if (cVar3 != '\0') {
        cVar2 = cVar2 * '\x02';
      }
    }
    else {
      uVar9 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar8);
      if (uVar9 == 0x7000) {
        FUN_0801cf00(param_1,0x7100);
        iVar10 = 0x14;
      }
      else if (uVar9 == DAT_0803c090) {
        FUN_0801cf00(param_1,0x7200);
        iVar10 = 0x16;
      }
      else {
        FUN_0801cf00(param_1,0x7300);
        iVar10 = 0x18;
      }
      bVar1 = *pbVar5;
      cVar2 = FUN_0803a4a8(iVar4);
      cVar2 = bVar1 + 3 + cVar2;
      *pbVar5 = 0;
      FUN_08002b10(0x71);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    FUN_08005794(param_1 + 0x74,iVar10 * 0x18 + DAT_0803c15c,cVar2,0xffffffff,0xffffffff,0xffffffff)
    ;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar2 = FUN_0803c1e4(param_1);
    if (cVar2 == '\x02') {
      piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803c184);
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
    else {
      cVar3 = FUN_0803c400(param_1);
      if (cVar3 != '\0') {
        FUN_080d1bcc(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
        FUN_08002b10(0x2b);
        cVar2 = '\x01';
      }
      if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
        return in_lr;
      }
      piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803c1e0);
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
  }
  return in_lr;
}


