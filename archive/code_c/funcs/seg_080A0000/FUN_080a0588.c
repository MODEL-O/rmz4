// undefined FUN_080a0588(void)
// entry 0x80a0588


undefined4 FUN_080a0588(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0dc4(0,&local_1c,0x200,*(undefined1 *)(param_1 + 0xb8));
    FUN_080e0dc0(param_1 + 0x54,*(undefined1 *)(param_1 + 0x10),uVar5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080a06b8);
    *(uint *)(param_1 + 0x5c) = (uVar5 * 2 + -1) * 0x80;
    *(undefined4 *)(param_1 + 0x60) = DAT_080a06bc;
    uVar3 = *DAT_080a06c0 * DAT_080a06c4 + DAT_080a06c8;
    *DAT_080a06c0 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 >> 0x10) & 3) + 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  local_1c = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_18 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (sVar2 = FUN_08007c7c(local_1c + (uVar5 * 2 + -1) * 0xc00,local_18), sVar2 != 0)) {
    FUN_08002b10(0x2a);
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0c88(1,&local_1c);
    FUN_080a0c58(param_1);
    FUN_0802ab88(4,0x23,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(ushort *)(DAT_080a06cc + 0xc) <= DAT_080a06d0) {
      *(ushort *)(DAT_080a06cc + 0xc) = *(ushort *)(DAT_080a06cc + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(int *)(param_1 + 0x54) = local_1c;
    *(int *)(param_1 + 0x58) = local_18;
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}


