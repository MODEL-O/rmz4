// undefined FUN_0810d51c(void)
// entry 0x810d51c


undefined4 FUN_0810d51c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_0810d560;
  puVar3 = (undefined4 *)(DAT_0810d560 + 0x590);
  *puVar3 = 0;
  iVar5 = 0x4f;
  puVar2 = (undefined4 *)(iVar1 + 0x580);
  iVar4 = DAT_0810d564;
  do {
    *(short *)((int)puVar2 + 6) = (short)iVar4;
    *puVar2 = *puVar3;
    *puVar3 = puVar2;
    puVar2 = puVar2 + -2;
    iVar4 = iVar4 + -2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(undefined4 *)(iVar1 + 0x588) = 0;
  *(undefined4 *)(iVar1 + 0x58c) = 0;
  *(undefined2 *)(iVar1 + 4) = 0;
  return in_lr;
}


