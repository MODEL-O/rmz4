// undefined FUN_080cdc00(void)
// entry 0x80cdc00


undefined4 FUN_080cdc00(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar7 + 0xd) != '\0') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cdc30);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080cdd84(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + 0x1000;
    if (*(char *)(param_1 + 0x71) != '\0') goto LAB_080cdd52;
    *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + DAT_080cdcf0;
    iVar3 = DAT_080cdcfc;
    iVar6 = DAT_080cdcf8;
    puVar2 = DAT_080cdcf4;
    uVar5 = *DAT_080cdcf4 * DAT_080cdcf8 + DAT_080cdcfc;
    *DAT_080cdcf4 = uVar5 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x54) - ((uVar5 & 0xfffffff) >> 0x10);
    local_20 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0cec(4,&local_24,0,0);
    FUN_080d0dc4(0,&local_24,0x200,(uint)*(byte *)(param_1 + 0x11) << 8);
    *(undefined1 *)(iVar7 + 0xdb) = 1;
    if (*(byte *)(param_1 + 0x10) < 2) {
      FUN_0801cf00(param_1,DAT_080cdd00);
    }
    else if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == -0x2400)
            && (uVar5 = *puVar2 * iVar6 + iVar3, *puVar2 = uVar5 & 0x7fffffff,
               ((uVar5 & 0x7fffffff) >> 0x10 & 3) == 0)) {
      FUN_0801cf00(param_1,DAT_080cdd44);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + 0x1000;
      }
      goto LAB_080cdd52;
    }
    if ((bVar1 != 0) ||
       (iVar6 = *(int *)(param_1 + 0x54) + DAT_080cdc74, *(int *)(param_1 + 0x54) = iVar6,
       *(int *)(iVar7 + 0x54) + 0x1000 <= iVar6)) goto LAB_080cdd52;
    FUN_08002b10(0x1b6);
    *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + 0x1000;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080cdd52:
  FUN_0801cff0(param_1);
  if (*(ushort *)(iVar7 + 0x52) == 0) {
    iVar7 = *(int *)(iVar7 + 0x58);
    iVar6 = *(int *)(param_1 + 0x68);
  }
  else {
    iVar6 = (int)(*(int *)(param_1 + 0x68) * (uint)*(ushort *)(iVar7 + 0x52)) >> 8;
    iVar7 = *(int *)(iVar7 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar7 + iVar6;
  return in_lr;
}


