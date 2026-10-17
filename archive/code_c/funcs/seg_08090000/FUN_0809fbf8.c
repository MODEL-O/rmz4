// undefined FUN_0809fbf8(void)
// entry 0x809fbf8


undefined4 FUN_0809fbf8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar3 = param_1 + 0x54;
    FUN_080dfef0(iVar3,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + DAT_0809fcd0 >> 0x10,0);
    FUN_080dfef0(iVar3,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + DAT_0809fcd4 >> 0x10,1);
    iVar1 = DAT_0809fcd8;
    FUN_080dfef0(iVar3,(uint)*(byte *)(param_1 + 0x11) * 0x100 + DAT_0809fcd8 & 0xffff,2);
    FUN_080dfef0(iVar3,(uint)*(byte *)(param_1 + 0x11) * 0x100 + iVar1 & 0xffff,2);
    iVar1 = DAT_0809fcdc;
    FUN_080dfef0(iVar3,(uint)*(byte *)(param_1 + 0x11) * 0x100 + DAT_0809fcdc & 0xffff,3);
    FUN_080dfef0(iVar3,(uint)*(byte *)(param_1 + 0x11) * 0x100 + iVar1 & 0xffff,3);
    FUN_08002b10(0x3f);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  *(undefined1 *)(iVar4 + 0xd9 + (uint)*(byte *)(param_1 + 0x11)) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  if (*(byte *)(iVar4 + 0xd) < 0xd) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809fce0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


