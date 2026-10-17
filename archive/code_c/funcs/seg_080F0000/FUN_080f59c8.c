// undefined FUN_080f59c8(void)
// entry 0x80f59c8


undefined4 FUN_080f59c8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  uVar2 = FUN_0801fb14(DAT_080f5a7c,param_1 + 0x54);
  if (0x1e000 < uVar2) {
    iVar3 = *(int *)(param_1 + 0xb4);
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined1 *)(iVar3 + 0x94) = 0;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
    iVar1 = DAT_080f5a80;
    piVar4 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_080f5a80);
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    iVar3 = *(int *)(param_1 + 0xb8);
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined1 *)(iVar3 + 0x94) = 0;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) =
         *(undefined4 *)(*(int *)((uint)*(byte *)(iVar3 + 9) * 4 + iVar1) + 0xc);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)((uint)*(byte *)(param_1 + 9) * 4 + iVar1) + 0x10);
  }
  return in_lr;
}


