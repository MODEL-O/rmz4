// undefined FUN_080a64a0(void)
// entry 0x80a64a0


undefined4 FUN_080a64a0(int param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_080a6518));
    uVar3 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x5c),0x28);
    *(undefined4 *)(param_1 + 100) = uVar3;
    uVar3 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x60),0x28);
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined1 *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(char *)(param_1 + 0xe) == '\x01') && (*(char *)(param_1 + 0x72) == '\x01')) &&
     (*(char *)(param_1 + 0x71) == '\x02')) {
    cVar2 = FUN_080a66b4(param_1);
    iVar6 = DAT_080a660c;
    iVar5 = DAT_080a6608;
    puVar1 = DAT_080a6604;
    if (cVar2 == '\x02') {
      *(undefined1 *)(param_1 + 0x12) = 0x1e;
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = *DAT_080a6604 * DAT_080a6608 + DAT_080a660c;
    *DAT_080a6604 = uVar4 & 0x7fffffff;
    FUN_080d0ff4(uVar3,*(int *)(param_1 + 0x58) + ((uVar4 & 0x7fffffff) >> 0x10 & 0xf) * 0x100,1);
    uVar4 = *puVar1 * iVar5 + iVar6;
    *puVar1 = uVar4 & 0x7fffffff;
    FUN_080d0ff4(*(int *)(param_1 + 0x54) + ((uVar4 & 0x7fffffff) >> 0x10 & 0xf) * 0x100,
                 *(undefined4 *)(param_1 + 0x58),0);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  iVar5 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar5;
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     (iVar6 + DAT_080a6618 < *(int *)(DAT_080a6610 + DAT_080a6614))) {
    iVar5 = iVar5 * -0x100;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar5 >> 8;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_080a661c));
    FUN_08002b10(0xe8);
  }
  cVar2 = FUN_080a669c(param_1);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x13) * 0x30 + DAT_080a6620);
  }
  return in_lr;
}


