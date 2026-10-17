// undefined FUN_0803bb10(void)
// entry 0x803bb10


undefined4 FUN_0803bb10(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0xd) == '\0') && (cVar2 = FUN_0803c400(param_1), cVar2 != '\0')) {
    FUN_080d1bcc(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar1 = -iVar5;
    *(int *)(param_1 + 0x5c) = iVar1;
    uVar3 = *DAT_0803bb6c * DAT_0803bb70 + DAT_0803bb74;
    *DAT_0803bb6c = uVar3 & 0x7fffffff;
    if (((uVar3 & 0x7fffffff) >> 0x10 & 1) == 0) {
      *(int *)(param_1 + 0x60) = iVar5;
    }
    else {
      *(int *)(param_1 + 0x60) = iVar1;
    }
    FUN_08002b10(0x2b);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar2 = FUN_0803c1e4(param_1);
  if (cVar2 != '\0') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803bbc4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}


