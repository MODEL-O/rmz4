// undefined FUN_080008c8(void)
// entry 0x80008c8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080008c8(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  
  pbVar3 = 0x030016f5;
  iVar2 = 0x03000380;
  puVar4 = (undefined2 *)(0x03000380 + 0x1200);
  pbVar5 = 0x030016f5 + -1;
  do {
    FUN_0810d5dc();
    FUN_08002364();
    *(ushort *)(0x00001202 + iVar2) = (ushort)(*(ushort *)(0x00001202 + iVar2) == 0);
    *puVar4 = 0;
    FUN_08001574();
    do {
      do {
      } while (*pbVar5 < *pbVar3);
    } while ((*(int *)0x04000006) != 0xa1);
    *pbVar5 = 0;
    FUN_08001490();
    _DAT_04000000 = _DAT_04000000 & (ushort)0x0000ff7f;
    FUN_080026d0();
    FUN_08002868();
    FUN_080028ec();
    FUN_0800291c();
    FUN_0800297c();
    FUN_08000c98();
    FUN_0810d664();
    FUN_08002094();
    FUN_08001c3c();
    if ((((((*(int *)0x02000790) == '\0') && (*(int *)(0x0202f3b0 + 0x234) != 0)) &&
         (*(int *)(0x0202f610 + 0xc) != 0)) &&
        ((uVar1 = (*(int *)0x02000760), (uVar1 & 0xc) == 0xc && ((uVar1 & 1) != 0)))) &&
       (((uVar1 & 2) != 0 &&
        (((uVar1 = ((int *)0x02000760)[2], (uVar1 & 0xc) != 0 || ((uVar1 & 1) != 0)) || ((uVar1 & 2) != 0))
        )))) {
      FUN_08001390(0);
      FUN_08001390(1);
      FUN_0810f6f8(0x0202f3b0,1);
      FUN_080012b8(0,0x080007cd);
    }
    FUN_08001330(param_1,1);
  } while( true );
}


