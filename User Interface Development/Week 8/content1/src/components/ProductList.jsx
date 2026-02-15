function ProductList() {
  const products = [
    { id: 1, name: "Laptop", price: "$1200" },
    { id: 2, name: "Phone", price: "$800" },
    { id: 3, name: "Tablet", price: "$500" },
  ];

  return (
    <div className="flex flex-col gap-2 p-3 border-2 border-green-400 rounded">
      <h3 className="font-bold">Products:</h3>
      {products.map((product) => (
        <div key={product.id} className="flex justify-between">
          <span>{product.name}</span>
          <span>{product.price}</span>
        </div>
      ))}
    </div>
  );
}

export default ProductList;
