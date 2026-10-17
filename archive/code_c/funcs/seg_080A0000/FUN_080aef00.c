// undefined FUN_080aef00(void)
// entry 0x80aef00


undefined4 FUN_080aef00(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0xf0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_0801cff0(param_1);
  iVar6 = *(int *)(iVar4 + 0x54) + DAT_080aef84;
  *(int *)(param_1 + 0x54) = iVar6;
  iVar1 = DAT_080aef88;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + DAT_080aef88;
  puVar5 = (uint *)(param_1 + 0x8c);
  if ((((*puVar5 & 0x800) == 0) ||
      (uVar3 = *(ushort *)(DAT_080aef8c + 8) & 8, (*(ushort *)(DAT_080aef8c + 8) & 8) != 0)) ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    iVar4 = *DAT_080af000;
    if ((*(uint *)(iVar4 + 0x8c) & 1) == 0) {
      *(int *)(iVar4 + 0x54) = iVar6;
      *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + 0x1300;
      *(undefined4 *)(iVar4 + 0x60) = 0;
    }
    else {
      *(byte *)(iVar4 + 0x142) = *(byte *)(iVar4 + 0x142) | 0x40;
      *(undefined1 *)(iVar4 + 0xd) = 4;
      *(char *)(iVar4 + 0xe) = (char)uVar3;
      *(int *)(iVar4 + 0x128) = iVar1;
      *(undefined4 *)(iVar4 + 300) = DAT_080af004;
      *(uint *)(iVar4 + 0x130) = uVar3;
      *(undefined4 *)(iVar4 + 0x134) = 0x40;
      *(undefined2 *)(iVar4 + 0x138) = 1;
      *puVar5 = uVar3;
      *(uint *)(param_1 + 0x90) = uVar3;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(uint *)(param_1 + 0x5c) = uVar3;
      *(uint *)(param_1 + 0x60) = uVar3;
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


