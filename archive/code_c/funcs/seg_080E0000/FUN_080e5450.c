// undefined FUN_080e5450(void)
// entry 0x80e5450


undefined4 FUN_080e5450(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080e5540;
    FUN_080d0c88(1,&local_1c);
    FUN_08002b10(0x2a);
    *(undefined1 *)(param_1 + 0x11) = 1;
    iVar8 = param_1 + 0x54;
    FUN_080e52b4(iVar8,1,2);
    FUN_080e52b4(iVar8,1,3);
    FUN_080e52b4(iVar8,1,4);
  }
  iVar3 = DAT_080e5550;
  iVar8 = DAT_080e554c;
  puVar2 = DAT_080e5548;
  piVar6 = (int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + DAT_080e5544);
  uVar4 = *DAT_080e5548 * DAT_080e554c + DAT_080e5550;
  uVar7 = uVar4 & 0x7fffffff;
  *DAT_080e5548 = uVar7;
  iVar5 = *piVar6 * (((uVar4 & 0x7fffffff) >> 0x10 & 0xff) + 0x80);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  uVar4 = uVar7 * iVar8 + iVar3;
  *puVar2 = uVar4 & 0x7fffffff;
  iVar8 = (((uVar4 & 0x7fffffff) >> 0x10 & 0xff) + 0x200) * -0x100;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar8 >> 8;
  iVar8 = DAT_080e5554;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)((bVar1 - 1) * 8 + DAT_080e5554) * 0x100;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + iVar8 + 4) * 0x100;
  FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 1) * 2 + DAT_080e5558));
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


