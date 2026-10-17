// undefined FUN_08004f50(void)
// entry 0x8004f50


void FUN_08004f50(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  iVar3 = 0;
  puVar2 = (undefined4 *)((param_3 & 0xffff) * 8 + param_2);
  uVar5 = *puVar2;
  uVar4 = puVar2[1];
  do {
    iVar1 = iVar3 * 0x80;
    iVar3 = iVar3 + 1;
    puVar2 = (undefined4 *)(iVar1 + param_1);
    iVar1 = 0xf;
    do {
      *puVar2 = uVar5;
      puVar2[0x10] = uVar4;
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  } while (iVar3 < 0x10);
  return;
}


