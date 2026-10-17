// undefined FUN_080feb48(void)
// entry 0x80feb48


undefined4 FUN_080feb48(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0xa800);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    iVar5 = DAT_080fec6c;
    iVar6 = param_1 + 0x54;
    FUN_080d4c8c(iVar6,DAT_080fec6c,0,bVar1 & 0x10);
    FUN_080d4c8c(iVar6,iVar5 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar6,iVar5 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar6,iVar5 + 0x54,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar6,iVar5 + 0x70,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar6,iVar5 + 0x8c,0,*(byte *)(param_1 + 10) & 0x10);
    *(undefined1 *)(param_1 + 0x12) = 0;
    local_20 = *(int *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + DAT_080fec70;
    FUN_080d0c88(1,&local_20);
    FUN_08002b10(0x2a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\x04') {
    uVar3 = *DAT_080fec74 * DAT_080fec78 + DAT_080fec7c;
    *DAT_080fec74 = uVar3 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x54) + (8 - ((uVar3 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
    local_1c = *(int *)(param_1 + 0x58);
    iVar5 = DAT_080fec80;
  }
  else {
    if (cVar2 != '\b') {
      if (cVar2 == '\f') {
        uVar3 = *DAT_080fed40 * DAT_080fed44 + DAT_080fed48;
        *DAT_080fed40 = uVar3 & 0x7fffffff;
        local_20 = *(int *)(param_1 + 0x54) + (8 - ((uVar3 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
        local_1c = *(int *)(param_1 + 0x58) + DAT_080fed4c;
        FUN_080d0c88(1,&local_20);
        FUN_08002b10(0x2a);
      }
      goto LAB_080fed12;
    }
    uVar3 = *DAT_080fecc4 * DAT_080fecc8 + DAT_080feccc;
    *DAT_080fecc4 = uVar3 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x54) + (8 - ((uVar3 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
    local_1c = *(int *)(param_1 + 0x58);
    iVar5 = DAT_080fecd0;
  }
  local_1c = local_1c + iVar5;
  FUN_080d0c88(1,&local_20);
  FUN_08002b10(0x2a);
LAB_080fed12:
  if (0xb < *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fed50);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


