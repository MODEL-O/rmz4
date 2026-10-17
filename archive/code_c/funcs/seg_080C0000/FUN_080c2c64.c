// undefined FUN_080c2c64(void)
// entry 0x80c2c64


undefined4 FUN_080c2c64(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_18 = *(undefined4 *)(*DAT_080c2d08 + 0x54);
    local_14 = *(undefined4 *)(iVar7 + 0xb4);
    uVar2 = FUN_0810d3ac(param_1 + 0x54,&local_18);
    iVar6 = DAT_080c2d0c;
    iVar4 = (bVar1 >> 4 & 1) * 2;
    uVar2 = (uVar2 & 0xff) + iVar4 * (0x140 - (uVar2 & 0xff));
    uVar5 = uVar2 & 0xff;
    if (0x80 < uVar2 * 0x1000000 + 0xb0000000 >> 0x18) {
      uVar5 = 0x50;
    }
    uVar5 = uVar5 + (0x140 - uVar5) * iVar4;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((uVar5 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080c2d0c) << 2;
    *(int *)(param_1 + 0x60) = (int)*(short *)((uVar5 & 0xff) * 2 + iVar6) << 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb6) == '\0') {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) || (*(int *)(iVar7 + 0xb4) + DAT_080c2d58 <= iVar6))
    {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c2d10);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080c2f2c(param_1);
  }
  return in_lr;
}


