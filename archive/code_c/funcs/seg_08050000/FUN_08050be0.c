// undefined FUN_08050be0(void)
// entry 0x8050be0


undefined4 FUN_08050be0(int param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08050c24);
    uVar6 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(undefined1 *)(param_1 + 0x12) = 0;
    FUN_08002b10(0xeb);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != -1) goto LAB_08050dca;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08050dca;
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      local_1c = *(int *)(param_1 + 0x54);
      local_18 = FUN_08008748(local_1c,*(undefined4 *)(param_1 + 0x58));
      iVar8 = DAT_08050ca0;
      puVar2 = DAT_08050c9c;
      uVar7 = DAT_08050ca0 * *DAT_08050c9c + DAT_08050ca4;
      uVar9 = uVar7 & 0x7fffffff;
      *DAT_08050c9c = uVar9;
      uVar3 = DAT_08050ce0;
      uVar6 = DAT_08050ca8;
      local_1c = local_1c + 0x1000 + ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
      if ((*(byte *)(param_1 + 0x12) & 3) == 1) {
        uVar7 = iVar8 * uVar9 + DAT_08050ca4;
        *puVar2 = uVar7 & 0x7fffffff;
        FUN_080d4c8c(&local_1c,uVar6,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4);
      }
      else {
        uVar7 = iVar8 * uVar9 + DAT_08050ce4;
        *puVar2 = uVar7 & 0x7fffffff;
        FUN_080d4c8c(&local_1c,uVar3,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 3) < 2) {
      iVar8 = *(int *)(param_1 + 0x54) + 0x100;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x54) + DAT_08050d20;
    }
    *(int *)(param_1 + 0x54) = iVar8;
    iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar8;
    sVar5 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar8 + DAT_08050d24);
    if (sVar5 != 0) goto LAB_08050dca;
    FUN_0801cfc8(param_1,DAT_08050d28,3,4);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 8;
  }
  else {
    if (bVar1 != 2) {
      if (((bVar1 == 3) && (*(char *)(param_1 + 0x73) == '\x03')) &&
         ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      goto LAB_08050dca;
    }
    iVar8 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    sVar5 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if (sVar5 == 0) goto LAB_08050dca;
    FUN_0801cf00(param_1,DAT_08050da4);
    uVar6 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    FUN_08002b10(0xf0);
    FUN_0801fe64(4,param_1 + 0x54);
    FUN_080c1a78(*(int *)(param_1 + 0x54) + DAT_08050da8,*(undefined4 *)(param_1 + 0xb8),0,2);
    FUN_080c1a78(*(int *)(param_1 + 0x54) + 0x1800,*(undefined4 *)(param_1 + 0xb8),1,2);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08050dca:
  FUN_0801cff0(param_1);
  return in_lr;
}


